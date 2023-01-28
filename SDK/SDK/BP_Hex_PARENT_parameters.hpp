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

// 0x71 (0x71 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh
struct ABP_Hex_PARENT_C_HandleUpdatingBannerMesh_Params
{
public:
	class USceneComponent*                       Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              CompletedQuest;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Material_Instance_Dynamic;                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x18(0x18)(Edit, HasGetValueTypeHash)
	bool                                         HasCompletedQuest;                                 // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue2;       // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidNetID_ReturnValue;                 // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_244E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x38(0x10)(ZeroConstructor, ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x58(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert
struct ABP_Hex_PARENT_C_HandleMissionAlert_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue2;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionAlertIndicator_C*              K2Node_DynamicCast_AsMission_Alert_Indicator;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_244F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionAlertIndicator_C*              K2Node_DynamicCast_AsMission_Alert_Indicator2;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortMissionAlertCategory         CallFunc_GetMissionAlertCategory_ReturnValue;      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTileHidden_ReturnValue;                 // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMissionAlertTile_ReturnValue;           // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
struct ABP_Hex_PARENT_C_GroundSliceSettings_Params
{
public:
	class UMaterialInstanceDynamic*              SourceMaterial;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TileTypeA;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TileTypeB;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileIsSameRegionA;                                 // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileIsSameRegionB;                                 // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileIsHiddenA;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileIsHiddenB;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileExistsA;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileExistsB;                                       // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
struct ABP_Hex_PARENT_C_UserConstructionScript_Params
{
public:
	struct FTransform                            Temp_struct_Variable;                              // 0x0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2450[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2451[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc
struct ABP_Hex_PARENT_C_Timeline_11__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc
struct ABP_Hex_PARENT_C_Timeline_11__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc
struct ABP_Hex_PARENT_C_Timeline_12__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc
struct ABP_Hex_PARENT_C_Timeline_12__UpdateFunc_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
struct ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params
{
public:
	int32                                        TeamPower;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PersonalPower;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA
struct ABP_Hex_PARENT_C_FireLightningA_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile
struct ABP_Hex_PARENT_C_OnInitializeTile_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged
struct ABP_Hex_PARENT_C_HandleFrontendCameraChanged_Params
{
public:
	enum class EFrontEndCamera                   NewCamera;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   OldCamera;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged
struct ABP_Hex_PARENT_C_OnMarkedQuestChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned
struct ABP_Hex_PARENT_C_CheckIfQuestShouldBePinned_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus
struct ABP_Hex_PARENT_C_CheckFocus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus
struct ABP_Hex_PARENT_C_ForceDefocus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated
struct ABP_Hex_PARENT_C_OnMissionDataUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel
struct ABP_Hex_PARENT_C_CheckForPinnedInLevel_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus
struct ABP_Hex_PARENT_C_OnDefocus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized
struct ABP_Hex_PARENT_C_RetryTileInitialized_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryUpdatesPaused
struct ABP_Hex_PARENT_C_RetryUpdatesPaused_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus
struct ABP_Hex_PARENT_C_OnFocus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect
struct ABP_Hex_PARENT_C_OnHostDeselect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect
struct ABP_Hex_PARENT_C_OnHostSelect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies
struct ABP_Hex_PARENT_C_SetMissionPowerLevelDependencies_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect
struct ABP_Hex_PARENT_C_OnClientDeselect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect
struct ABP_Hex_PARENT_C_OnClientSelect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay
struct ABP_Hex_PARENT_C_ReceiveBeginPlay_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning
struct ABP_Hex_PARENT_C_MissionLightning_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmitterTime;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0xC(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff
struct ABP_Hex_PARENT_C_MissionLightningOff_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmitterTime;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ParticleTime;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x1C(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Direction;                                         // 0x28(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D4 (0x4D4 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
struct ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2452[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TeamPower;                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_PersonalPower;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2453[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue3; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue4; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   K2Node_CustomEvent_NewCamera;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   K2Node_CustomEvent_OldCamera;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue4;         // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue5;         // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2454[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        CallFunc_IsTileValidForMarkedQuest_OutMarkedQuest; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTileValidForMarkedQuest_ReturnValue;    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTileHidden_ReturnValue;                 // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2455[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTileLocked_ReturnValue;                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2456[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasValidMissionData_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2457[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATheaterCamera_Blueprint_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2458[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue2;         // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTilePlayable_ReturnValue;               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2459[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x90(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue3;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue2;              // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_245A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue4;                  // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTotalSkillPointsEarned_ReturnValue;    // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_245B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_RandomFloatInRange_ReturnValue2;          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue3;          // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue4;          // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_245C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue5;                  // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_245D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x110(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue6;                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_245E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATheaterCamera_Blueprint_C*            CallFunc_Array_Get_Item;                           // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Conning_Color_For_Specific_Difficulty_Difficulty_Linear_Color; // 0x138(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Conning_Color_For_Specific_Difficulty_Invalid; // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_245F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue7;                  // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMissionDetails                   CallFunc_GetTileMissionDetails_MissionDetails;     // 0x158(0x160)()
	bool                                         CallFunc_GetTileMissionDetails_ReturnValue;        // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2460[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x2BC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              K2Node_DynamicCast_AsTexture;                      // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2461[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMissionDetails                   CallFunc_GetTileMissionDetails_MissionDetails2;    // 0x2D8(0x160)()
	bool                                         CallFunc_GetTileMissionDetails_ReturnValue2;       // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2462[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color; // 0x440(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Conning_Color_From_Difficulty_Value_Success; // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2463[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText; // 0x458(0x18)()
	int32                                        CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue; // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2464[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_EventName2;                     // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_EmitterTime2;                   // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location2;                      // 0x484(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Velocity2;                      // 0x490(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2465[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_EventName;                      // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_EmitterTime;                    // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ParticleTime;                   // 0x4AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x4B0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Velocity;                       // 0x4BC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Direction;                      // 0x4C8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

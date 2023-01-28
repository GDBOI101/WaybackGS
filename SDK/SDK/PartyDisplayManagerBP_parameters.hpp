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

// 0xC8 (0xC8 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals
struct APartyDisplayManagerBP_C_SetupPrefabVisuals_Params
{
public:
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3276[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x40(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x32 (0x32 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem
struct APartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem_Params
{
public:
	class UMeshComponent*                        OutDisplayedMesh;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3277[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
struct APartyDisplayManagerBP_C_GetItemDefinitionToShow_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3278[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCD (0xCD - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
struct APartyDisplayManagerBP_C_SetUIOverrideVisuals_Params
{
public:
	class UTexture2D*                            Large_Texture;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Item;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       Rarity;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3279[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x18(0x80)()
	class FString                                CallFunc_GetPersistentName_ReturnValue;            // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindSubstring_ReturnValue2;               // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindSubstring_ReturnValue3;               // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue2;              // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue3;              // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindSubstring_ReturnValue4;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue4;              // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
struct APartyDisplayManagerBP_C_GetWeaponPlacementTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x30(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x60(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327D[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue2;                // 0xA0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ComposeTransforms_ReturnValue;            // 0xD0(0x30)(IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
struct APartyDisplayManagerBP_C_UpdatePreviewMeshTransforms_Params
{
public:
	struct FTransform                            CallFunc_GetPreviewMeshWorldTransform_ReturnValue; // 0x0(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x30(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Percent_FloatFloat_ReturnValue;           // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
struct APartyDisplayManagerBP_C_GetItemPreviewOffset_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetPreviewMeshOffset_ReturnValue;         // 0x50(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x80(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xB0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xBC(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xC8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue2;     // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3280[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Select_Default;                             // 0xE0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location2;                 // 0x110(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation2;                 // 0x11C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale2;                    // 0x128(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3281[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue2;               // 0x140(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue3;               // 0x170(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ComposeTransforms_ReturnValue;            // 0x1A0(0x30)(IsPlainOldData, NoDestructor)
};

// 0x150 (0x150 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
struct APartyDisplayManagerBP_C_GetPreviewMeshWorldTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3282[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3283[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetItemPreviewOffset_ReturnValue;         // 0x50(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetWeaponPlacementTransform_ReturnValue;  // 0x80(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	float                                        K2Node_Select_Default;                             // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xB4(0xC)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ComposeTransforms_ReturnValue;            // 0xF0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ComposeTransforms_ReturnValue2;           // 0x120(0x30)(IsPlainOldData, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
struct APartyDisplayManagerBP_C_SetupStaticMeshVisuals_Params
{
public:
	class UStaticMesh*                           NewMesh;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x40(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
struct APartyDisplayManagerBP_C_SetupSkeletalMeshVisuals_Params
{
public:
	class USkeletalMesh*                         NewMesh;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x40(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
struct APartyDisplayManagerBP_C_ResetVisuals_Params
{
public:
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript
struct APartyDisplayManagerBP_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
struct APartyDisplayManagerBP_C_ScaleAnimLevel__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
struct APartyDisplayManagerBP_C_ScaleAnimLevel__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
struct APartyDisplayManagerBP_C_ScaleAnimEvolve__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
struct APartyDisplayManagerBP_C_ScaleAnimEvolve__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading
struct APartyDisplayManagerBP_C_ShowLoading_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading
struct APartyDisplayManagerBP_C_HideLoading_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
struct APartyDisplayManagerBP_C_ShowItem_Params
{
public:
	class UFortItem*                             ItemToView;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
struct APartyDisplayManagerBP_C_PlayLevelUpEffect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
struct APartyDisplayManagerBP_C_PlayEvolutionEffect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
struct APartyDisplayManagerBP_C_CelebrateWithFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
struct APartyDisplayManagerBP_C_PerformScaleMeshFX_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
struct APartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted_Params
{
public:
	class UFortItem*                             ItemWhoseAssetsWereLoaded;                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       LoadedAssets;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
struct APartyDisplayManagerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x388 (0x388 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
struct APartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3284[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_Event_ItemToView;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetWeaponPlacementTransform_ReturnValue;  // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x40(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x4C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x58(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue2;           // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3285[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x68(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult2;      // 0xF0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x178(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3286[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_Event_ItemWhoseAssetsWereLoaded;            // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       K2Node_Event_LoadedAssets;                         // 0x190(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3287[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3288[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition2;  // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3289[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  CallFunc_GetPreviewPrefabAsset_Asset;              // 0x1C8(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_GetPreviewPrefabAsset_ReturnValue;        // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_AssetClassToClass_ReturnValue;       // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            CallFunc_GetPreviewStaticMeshAsset_Asset;          // 0x1F8(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_GetPreviewStaticMeshAsset_ReturnValue;    // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsActor;                   // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_AssetToObject_ReturnValue;           // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_GetPreviewSkeletalMeshAsset_Asset;        // 0x238(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue;  // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh;                  // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_AssetToObject_ReturnValue2;          // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x281(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue;         // 0x288(0x20)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_AssetToObject_ReturnValue3;          // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3290[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue;           // 0x2C4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue2;          // 0x2D0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3291[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition3;  // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3292[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x2F0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<TSoftObjectPtr<class UObject>>        CallFunc_GetPreviewAssets_ReturnValue;             // 0x378(0x10)(ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
{
public:
	bool                                         bShouldBlockAbilities;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
struct UGameplayAbility_SetCanBeCanceled_Params
{
public:
	bool                                         bCanBeCanceled;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
struct UGameplayAbility_SendGameplayEvent_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                    Payload;                                           // 0x8(0xA8)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
struct UGameplayAbility_RemoveGrantedByEffect_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.MontageStop
struct UGameplayAbility_MontageStop_Params
{
public:
	float                                        OverrideBlendOutTime;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
struct UGameplayAbility_MontageSetNextSectionName_Params
{
public:
	class FName                                  FromSectionName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToSectionName;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
struct UGameplayAbility_MontageJumpToSection_Params
{
public:
	class FName                                  SectionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetingLocationInfo ReturnValue;                                       // 0x10(0x70)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
{
public:
	struct FGameplayAbilityTargetingLocationInfo ReturnValue;                                       // 0x0(0x70)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x40)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayEventData                    Payload;                                           // 0x40(0xA8)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
struct UGameplayAbility_K2_RemoveGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
struct UGameplayAbility_K2_OnEndAbility_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
struct UGameplayAbility_K2_ExecuteGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          Context;                                           // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_EndAbility
struct UGameplayAbility_K2_EndAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
struct UGameplayAbility_K2_CommitExecute_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
struct UGameplayAbility_K2_CommitAbilityCost_Params
{
public:
	bool                                         BroadcastCommitEvent;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
struct UGameplayAbility_K2_CommitAbilityCooldown_Params
{
public:
	bool                                         BroadcastCommitEvent;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceCooldown;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
struct UGameplayAbility_K2_CommitAbility_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
struct UGameplayAbility_K2_CheckAbilityCost_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
struct UGameplayAbility_K2_CheckAbilityCooldown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
struct UGameplayAbility_K2_CanActivateAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x40)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RelevantTags;                                      // 0x40(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
{
public:
	struct FGameplayEffectSpecHandle             EffectSpecHandle;                                  // 0x0(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x18(0x20)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>   ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
{
public:
	struct FGameplayEffectSpecHandle             EffectSpecHandle;                                  // 0x0(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
struct UGameplayAbility_K2_AddGameplayCueWithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameter;                              // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bRemoveOnAbilityEnd;                               // 0xC0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
struct UGameplayAbility_K2_AddGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          Context;                                           // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         bRemoveOnAbilityEnd;                               // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
struct UGameplayAbility_K2_ActivateAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
struct UGameplayAbility_InvalidateClientPredictionKey_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
struct UGameplayAbility_GetOwningActorFromActorInfo_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
struct UGameplayAbility_GetGrantedByEffectContext_Params
{
public:
	struct FGameplayEffectContextHandle          ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
struct UGameplayAbility_GetCurrentSourceObject_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
struct UGameplayAbility_GetCurrentMontage_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetCoolDownTimeRemaining
struct UGameplayAbility_GetCoolDownTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
struct UGameplayAbility_GetContextFromOwner_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      OptionalTargetData;                                // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetActorInfo
struct UGameplayAbility_GetActorInfo_Params
{
public:
	struct FGameplayAbilityActorInfo             ReturnValue;                                       // 0x0(0x40)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
struct UGameplayAbility_GetAbilityLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
struct UGameplayAbility_EndTaskByInstanceName_Params
{
public:
	class FName                                  InstanceName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.EndAbilityState
struct UGameplayAbility_EndAbilityState_Params
{
public:
	class FName                                  OptionalStateNameToEnd;                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
struct UGameplayAbility_ConfirmTaskByInstanceName_Params
{
public:
	class FName                                  InstanceName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndTask;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
struct UGameplayAbility_CancelTaskByInstanceName_Params
{
public:
	class FName                                  InstanceName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
{
public:
	struct FGameplayTagContainer                 WithGrantedTags;                                   // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
{
public:
	struct FGameplayTagContainer                 WithAssetTags;                                     // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stacks;                                            // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>   ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stacks;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
{
public:
	TSubclassOf<class UGameplayAbility>          InAbilityToActivate;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRemoteActivation;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAllowRemoteActivation;                            // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C6[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
struct UAbilitySystemComponent_TargetConfirm_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
struct UAbilitySystemComponent_TargetCancel_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
{
public:
	bool                                         NewInhibit;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
struct UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params
{
public:
	struct FGameplayEffectQuery                  Query;                                             // 0x0(0x170)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        NewLevel;                                          // 0x170(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C7[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewLevel;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InputPressed;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                    TriggerEventData;                                  // 0x20(0xA8)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
struct UAbilitySystemComponent_ServerTryActivateAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InputPressed;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        CurrentPredictionKey;                              // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReplicatedTargetDataHandle;                        // 0x20(0x20)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ApplicationTag;                                    // 0x40(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        CurrentPredictionKey;                              // 0x48(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
struct UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params
{
public:
	enum class EAbilityGenericReplicatedEvent    EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        CurrentPredictionKey;                              // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                VectorPayload;                                     // 0x38(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
{
public:
	enum class EAbilityGenericReplicatedEvent    EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        CurrentPredictionKey;                              // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
struct UAbilitySystemComponent_ServerSetInputReleased_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
struct UAbilitySystemComponent_ServerSetInputPressed_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
struct UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
struct UAbilitySystemComponent_ServerPrintDebug_Request_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
struct UAbilitySystemComponent_ServerEndAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToEnd;                                      // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x28(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
struct UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params
{
public:
	class UAnimMontage*                          ClientAnimMontage;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InPlayRate;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
{
public:
	class UAnimMontage*                          ClientAnimMontage;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientPosition;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SectionName;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NextSectionName;                                   // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
{
public:
	class UAnimMontage*                          ClientAnimMontage;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
struct UAbilitySystemComponent_ServerCancelAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToCancel;                                   // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
struct UAbilitySystemComponent_ServerAbilityRPCBatch_Params
{
public:
	struct FServerAbilityRPCBatch                BatchInfo;                                         // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               InstigatorAbilitySystemComponent;                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
struct UAbilitySystemComponent_OnRep_ServerDebugString_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
struct UAbilitySystemComponent_OnRep_OwningActor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
struct UAbilitySystemComponent_OnRep_ClientDebugString_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
{
public:
};

// 0xF0 (0xF0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params
{
public:
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x38(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params
{
public:
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x38(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params
{
public:
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x38(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x20(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
{
public:
	struct FGameplayEffectSpecForRPC             Spec;                                              // 0x0(0x78)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x78(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x20(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
{
public:
	struct FGameplayEffectSpecForRPC             Spec;                                              // 0x0(0x78)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x78(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x20(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
struct UAbilitySystemComponent_MakeOutgoingSpec_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectContextHandle          Context;                                           // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
struct UAbilitySystemComponent_MakeEffectContext_Params
{
public:
	struct FGameplayEffectContextHandle          ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
struct UAbilitySystemComponent_K2_InitStats_Params
{
public:
	TSubclassOf<class UAttributeSet>             Attributes;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DataTable;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
struct UAbilitySystemComponent_IsGameplayCueActive_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
struct UAbilitySystemComponent_GetGameplayEffectCount_Params
{
public:
	TSubclassOf<class UGameplayEffect>           SourceGameplayEffect;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               OptionalInstigatorFilterComponent;                 // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnforceOnGoingCheck;                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
struct UAbilitySystemComponent_ClientTryActivateAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
{
public:
	enum class EAbilityGenericReplicatedEvent    EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
struct UAbilitySystemComponent_ClientPrintDebug_Response_Params
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        GameFlags;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
struct UAbilitySystemComponent_ClientEndAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToEnd;                                      // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
struct UAbilitySystemComponent_ClientCancelAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToCancel;                                   // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                    TriggerEventData;                                  // 0x20(0xA8)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        PredictionKey;                                     // 0x4(0x2)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E3[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectContextHandle          Context;                                           // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
{
public:
	int32                                        InputID;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
{
public:
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
struct AGameplayCueNotify_Actor_WhileActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
struct AGameplayCueNotify_Actor_OnRemove_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
struct AGameplayCueNotify_Actor_OnExecute_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
struct AGameplayCueNotify_Actor_OnActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueEvent                 EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
struct AGameplayCueNotify_Actor_K2_EndGameplayCue_Params
{
public:
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
struct UGameplayCueNotify_Static_WhileActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1904[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
struct UGameplayCueNotify_Static_OnRemove_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1905[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
struct UGameplayCueNotify_Static_OnExecute_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1906[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
struct UGameplayCueNotify_Static_OnActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1907[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueEvent                 EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1908[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
struct UGameplayEffectExecutionCalculation_Execute_Params
{
public:
	struct FGameplayEffectCustomExecutionParameters ExecutionParams;                                   // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayEffectCustomExecutionOutput  OutExecutionOutput;                                // 0xA8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x250 (0x250 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x248)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x248(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
struct UGameplayCueInterface_BlueprintCustomHandler_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      HitResult;                                         // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1910[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1911[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1912[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
struct UAbilitySystemBlueprintLibrary_SetDuration_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1913[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                    Payload;                                           // 0x10(0xA8)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params
{
public:
	struct FGameplayAttribute                    AttributeA;                                        // 0x0(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeB;                                        // 0x20(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1914[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
{
public:
	class UGameplayEffect*                       InGameplayEffect;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InInstigator;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InEffectCauser;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InLevel;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1915[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
{
public:
	struct FGameplayTargetDataFilter             Filter;                                            // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                FilterActor;                                       // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
struct UAbilitySystemBlueprintLibrary_IsValid_Params
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1916[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1917[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1918[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1919[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x30(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191B[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x30(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xB8(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
struct UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x18(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_191E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0xC0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0xB8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      HitResult;                                         // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            ReturnValue;                                       // 0x28(0x88)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                            ReturnValue;                                       // 0xB8(0x88)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0xCC(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1920[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xCC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1921[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccessfullyFoundAttribute;                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1922[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccessfullyFoundAttribute;                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1923[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccessfullyFoundAttribute;                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1924[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccessfullyFoundAttribute;                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1925[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
struct UAbilitySystemBlueprintLibrary_GetEffectContext_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1926[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
struct UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>     ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1927[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xB8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1928[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0xB8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1929[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0xC0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
{
public:
	UInterfaceProperty_                          TargetCueInterface;                                // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EGameplayCueEvent                 EventType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x18(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetDataHandle;                                  // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       ActorFilterClass;                                  // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SourceTags;                                        // 0x28(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x48(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        BaseValue;                                         // 0x68(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x6C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x70(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SourceTags;                                        // 0x28(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x48(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x68(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x6C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params
{
public:
	struct FGameplayAttribute                    AttributeA;                                        // 0x0(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeB;                                        // 0x20(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
struct UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1930[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1931[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1932[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1933[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FHitResult                            ReturnValue;                                       // 0x18(0x88)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FHitResult                            HitResult;                                         // 0x18(0x88)(Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bReset;                                            // 0xA0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1934[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1935[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1936[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xB8)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagReqs;                                     // 0xB8(0x40)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagReqs;                                     // 0xF8(0x40)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x138(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1937[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class FName                                  DataName;                                          // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1938[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetHandle;                                      // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      HandleToAdd;                                       // 0x20(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x40(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             LinkedGameplayEffectSpec;                          // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           LinkedGameplayEffect;                              // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 NewGameplayTags;                                   // 0x18(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NewGameplayTag;                                    // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 NewGameplayTags;                                   // 0x18(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NewGameplayTag;                                    // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
{
public:
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;                                    // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation;                                    // 0x70(0x70)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0xE0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x88(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
{
public:
	TArray<class AActor*>                        ActorArray;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         OneTargetPerHandle;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1939[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x18(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x8(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
struct UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldDirection;                                    // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1947[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthOverTime;                                  // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1948[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SetVelocityOnFinish;                               // 0x34(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1949[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_ApplyRootMotionConstantForce* ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
struct UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
struct UAbilityTask_ApplyRootMotionJumpForce_Finish_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
struct UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumLandedTriggerTime;                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFinishOnLanded;                                   // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x2D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SetVelocityOnFinish;                               // 0x30(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          PathOffsetCurve;                                   // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_ApplyRootMotionJumpForce* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocationOffset;                              // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                                   // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           TargetLerpSpeedHorizontal;                         // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TargetLerpSpeedVertical;                           // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNewMovementMode;                               // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     MovementMode;                                      // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpeedToExpected;                          // 0x42(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1950[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1951[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SetVelocityOnFinish;                               // 0x5C(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x68(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableDestinationReachedInterrupt;               // 0x6C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1952[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
struct UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNewMovementMode;                               // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     MovementMode;                                      // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpeedToExpected;                          // 0x22(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1955[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1956[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SetVelocityOnFinish;                               // 0x34(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1957[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
struct UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LocationActor;                                     // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPush;                                           // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0x35(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoZForce;                                         // 0x36(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StrengthOverTime;                                  // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFixedWorldDirection;                           // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              FixedWorldDirection;                               // 0x4C(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SetVelocityOnFinish;                               // 0x5C(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x68(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_ApplyRootMotionRadialForce* ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
struct UAbilityTask_MoveToLocation_MoveToLocation_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           OptionalInterpolationCurve;                        // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          OptionalVectorInterpolationCurve;                  // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_MoveToLocation*           ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAbilityTaskNetSyncType           SyncType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1964[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_NetworkSyncPoint*         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
struct UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1966[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1967[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          MontageToPlay;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1968[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StartSection;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAbilityEnds;                              // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1969[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimRootMotionTranslationScale;                    // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_PlayMontageAndWait*       ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
struct UAbilityTask_Repeat_RepeatAction_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenActions;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalActionCount;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_Repeat*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
struct UAbilityTask_SpawnActor_SpawnActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    Class;                                             // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_SpawnActor*               ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                SpawnedActor;                                      // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    Class;                                             // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SpawnedActor;                                      // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
struct UAbilityTask_StartAbilityState_StartAbilityState_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StateName;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndCurrentState;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_StartAbilityState*        ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1970[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1971[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
{
public:
	bool                                         bFaceIn2D;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
struct AGameplayAbilityTargetActor_CancelTargeting_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*           TargetActor;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1977[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_VisualizeTargeting*       ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameplayAbilityTargetActor> Class;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1978[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_VisualizeTargeting*       ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*           SpawnedActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameplayAbilityTargetActor> Class;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*           SpawnedActor;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1979[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TagRequirements;                                   // 0x8(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         IncludeTriggeredAbilities;                         // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x49(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitAbilityActivate*      ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithTag;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithoutTag;                                        // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeTriggeredAbilities;                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitAbilityActivate*      ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
{
public:
	class UGameplayAbility*                      ActivatedAbility;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithTag;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithoutTage;                                       // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitAbilityCommit*        ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
{
public:
	class UGameplayAbility*                      ActivatedAbility;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    InAttribute;                                       // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InWithTag;                                         // 0x28(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InWithoutTag;                                      // 0x30(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaitAttributeChangeComparison    InComparisonType;                                  // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1980[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InComparisonValue;                                 // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1981[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitAttributeChange*      ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithSrcTag;                                        // 0x28(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithoutSrcTag;                                     // 0x30(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1982[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitAttributeChange*      ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
struct UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeNumerator;                                // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeDenominator;                              // 0x28(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaitAttributeChangeComparison    ComparisonType;                                    // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1984[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ComparisonValue;                                   // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerOnce;                                      // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1985[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
struct UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaitAttributeChangeComparison    ComparisonType;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1987[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ComparisonValue;                                   // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerOnce;                                      // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1988[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitAttributeChangeThreshold* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
struct UAbilityTask_WaitCancel_WaitCancel_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitCancel*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
struct UAbilityTask_WaitCancel_OnCancelCallback_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
struct UAbilityTask_WaitConfirm_WaitConfirm_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitConfirm*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
{
public:
	class UGameplayAbility*                      InAbility;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitConfirmCancel*        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
struct UAbilityTask_WaitDelay_WaitDelay_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitDelay*                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x258 (0x258 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
{
public:
	class UAbilitySystemComponent*               Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                   SpecApplied;                                       // 0x8(0x248)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x250(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       SourceFilter;                                      // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagRequirements;                             // 0x18(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagRequirements;                             // 0x58(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x98(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1991[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OptionalExternalOwner;                             // 0xA0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ListenForPeriodicEffect;                           // 0xA8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1992[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                       // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       TargetFilter;                                      // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagRequirements;                             // 0x18(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagRequirements;                             // 0x58(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x98(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1994[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OptionalExternalOwner;                             // 0xA0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ListenForPeriodicEffects;                          // 0xA8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1995[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                       // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
struct UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagRequirements;                             // 0x8(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagRequirements;                             // 0x48(0x40)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                OptionalExternalTarget;                            // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1997[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectStackChange* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OldCount;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
struct UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OptionalExternalTarget;                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayEvent*        ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InOptionalExternalTarget;                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayTagAdded*     ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InOptionalExternalTarget;                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayTagRemoved*   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
struct UAbilityTask_WaitInputPress_WaitInputPress_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestAlreadyPressed;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitInputPress*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
struct UAbilityTask_WaitInputPress_OnPressCallback_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestAlreadyReleased;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitInputRelease*         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     NewMode;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitMovementModeChange*   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitOverlap*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
struct UAbilityTask_WaitOverlap_OnHitCallback_Params
{
public:
	class UPrimitiveComponent*                   HitComp;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Hit;                                               // 0x28(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayTargetingConfirmation    ConfirmationType;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayAbilityTargetActor*           TargetActor;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitTargetData*           ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
struct UAbilityTask_WaitTargetData_WaitTargetData_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayTargetingConfirmation    ConfirmationType;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGameplayAbilityTargetActor> Class;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitTargetData*           ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivationTag;                                     // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*           SpawnedActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameplayAbilityTargetActor> Class;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*           SpawnedActor;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumMagnitude;                                  // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitVelocityChange*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x260 (0x260 - 0x0)
// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
struct UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params
{
public:
	class UGameplayEffect*                       GameplayEffect;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                   Spec;                                              // 0x8(0x248)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ASC;                                               // 0x250(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x258(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
struct UGameplayTagReponseTable_TagResponseEvent_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ASC;                                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Idx;                                               // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

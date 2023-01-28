#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Orphaned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOrphaned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   AttachedPawn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "Orphaned");

	Params::AEnemyPawn_Parent_C_Orphaned_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.TransformHitLocationWorldSpaceToPreskinnedLocalSpace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     PreskinnedLS                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::TransformHitLocationWorldSpaceToPreskinnedLocalSpace(struct FVector* PreskinnedLS, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "TransformHitLocationWorldSpaceToPreskinnedLocalSpace");

	Params::AEnemyPawn_Parent_C_TransformHitLocationWorldSpaceToPreskinnedLocalSpace_Params Parms;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PreskinnedLS != nullptr)
		*PreskinnedLS = Parms.PreskinnedLS;

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetParticlesOnCharacterMeshHiddenInGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SetParticlesOnCharacterMeshHiddenInGame(bool Hidden, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SetParticlesOnCharacterMeshHiddenInGame");

	Params::AEnemyPawn_Parent_C_SetParticlesOnCharacterMeshHiddenInGame_Params Parms;
	Parms.Hidden = Hidden;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetDuplicateCharacterMeshHiddenInGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SetDuplicateCharacterMeshHiddenInGame(bool Hidden, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SetDuplicateCharacterMeshHiddenInGame");

	Params::AEnemyPawn_Parent_C_SetDuplicateCharacterMeshHiddenInGame_Params Parms;
	Parms.Hidden = Hidden;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CreateDuplicateCharacterMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material_to_Apply                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::CreateDuplicateCharacterMesh(class UMaterialInterface* Material_to_Apply, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FTransform& Temp_struct_Variable, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "CreateDuplicateCharacterMesh");

	Params::AEnemyPawn_Parent_C_CreateDuplicateCharacterMesh_Params Parms;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestoreMaterialMapToDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::RestoreMaterialMapToDefaults(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "RestoreMaterialMapToDefaults");

	Params::AEnemyPawn_Parent_C_RestoreMaterialMapToDefaults_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverwriteKeysInMaterialMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Fire                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Ice                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Lightning                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Default                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  MaterialInterfacesArray                                          (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item2                                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Add_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::OverwriteKeysInMaterialMap(class UMaterialInterface* Fire, class UMaterialInterface* Ice, class UMaterialInterface* Lightning, class UMaterialInterface* Default, const TArray<class UMaterialInterface*>& MaterialInterfacesArray, int32 Temp_int_Array_Index_Variable, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Array_Get_Item2, bool CallFunc_Map_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OverwriteKeysInMaterialMap");

	Params::AEnemyPawn_Parent_C_OverwriteKeysInMaterialMap_Params Parms;
	Parms.Fire = Fire;
	Parms.Ice = Ice;
	Parms.Lightning = Lightning;
	Parms.Default = Default;
	Parms.MaterialInterfacesArray = MaterialInterfacesArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Map_Add_ReturnValue = CallFunc_Map_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialFromMapByMeshTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TagName                                                          (Edit, ZeroConstructor, HasGetValueTypeHash)
// bool                               TagWasFound                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::OverrideMaterialFromMapByMeshTag(const class FString& TagName, bool TagWasFound, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& K2Node_Select_Default, class UMaterialInterface* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Map_Contains_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OverrideMaterialFromMapByMeshTag");

	Params::AEnemyPawn_Parent_C_OverrideMaterialFromMapByMeshTag_Params Parms;
	Parms.TagName = TagName;
	Parms.TagWasFound = TagWasFound;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_SpecialEventHalloweenPumpkinHeadApplied
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::OnRep_SpecialEventHalloweenPumpkinHeadApplied(const struct FTransform& Temp_struct_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue3, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OnRep_SpecialEventHalloweenPumpkinHeadApplied");

	Params::AEnemyPawn_Parent_C_OnRep_SpecialEventHalloweenPumpkinHeadApplied_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference = CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpecialEventHalloweenPumpkinHeadHusk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ApplyPumpkinHeadMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DebugApplicationOrRemoval_                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_, bool CallFunc_HasAuthority_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SpecialEventHalloweenPumpkinHeadHusk");

	Params::AEnemyPawn_Parent_C_SpecialEventHalloweenPumpkinHeadHusk_Params Parms;
	Parms.ApplyPumpkinHeadMesh = ApplyPumpkinHeadMesh;
	Parms.DebugApplicationOrRemoval_ = DebugApplicationOrRemoval_;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMeshAttachedToCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 Static_Mesh                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Socket_Name                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Relative_Transform                                               (Parm, IsPlainOldData, NoDestructor)
// bool                               Absolute_Location                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Absolute_Rotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Absolute_Scale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        Static_Mesh_Component_Reference                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SpawnMeshAttachedToCharacter(class UStaticMesh* Static_Mesh, class FName Socket_Name, const struct FTransform& Relative_Transform, bool Absolute_Location, bool Absolute_Rotation, bool Absolute_Scale, class UStaticMeshComponent** Static_Mesh_Component_Reference, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SpawnMeshAttachedToCharacter");

	Params::AEnemyPawn_Parent_C_SpawnMeshAttachedToCharacter_Params Parms;
	Parms.Static_Mesh = Static_Mesh;
	Parms.Socket_Name = Socket_Name;
	Parms.Relative_Transform = Relative_Transform;
	Parms.Absolute_Location = Absolute_Location;
	Parms.Absolute_Rotation = Absolute_Rotation;
	Parms.Absolute_Scale = Absolute_Scale;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Static_Mesh_Component_Reference != nullptr)
		*Static_Mesh_Component_Reference = Parms.Static_Mesh_Component_Reference;

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay_in_Seconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::RestorePreviousMaterialOnCharacterMesh(float Delay_in_Seconds, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "RestorePreviousMaterialOnCharacterMesh");

	Params::AEnemyPawn_Parent_C_RestorePreviousMaterialOnCharacterMesh_Params Parms;
	Parms.Delay_in_Seconds = Delay_in_Seconds;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::CharacterSpawnInSafetyCheck()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "CharacterSpawnInSafetyCheck");

	Params::AEnemyPawn_Parent_C_CharacterSpawnInSafetyCheck_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Eye_Color_Inner                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Eye_Color_Outer                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SetCharacterEyeColors(const struct FLinearColor& Eye_Color_Inner, const struct FLinearColor& Eye_Color_Outer, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SetCharacterEyeColors");

	Params::AEnemyPawn_Parent_C_SetCharacterEyeColors_Params Parms;
	Parms.Eye_Color_Inner = Eye_Color_Inner;
	Parms.Eye_Color_Outer = Eye_Color_Outer;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Inner_Color                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Outer_Color                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SetCharacterFresnelGlowColors(const struct FLinearColor& Inner_Color, const struct FLinearColor& Outer_Color, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SetCharacterFresnelGlowColors");

	Params::AEnemyPawn_Parent_C_SetCharacterFresnelGlowColors_Params Parms;
	Parms.Inner_Color = Inner_Color;
	Parms.Outer_Color = Outer_Color;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemOnCharacterMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             ParticleSystemTemplate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    ParticleSystemComponentReferenceVar                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   InstanceParameters                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               AutoActivate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AutoDestroy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AbsoluteLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AbsoluteRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AbsoluteScale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    PSComponentReference                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TArray<struct FParticleSysParam>& InstanceParameters, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, class UParticleSystemComponent** PSComponentReference, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SpawnParticleSystemOnCharacterMesh");

	Params::AEnemyPawn_Parent_C_SpawnParticleSystemOnCharacterMesh_Params Parms;
	Parms.ParticleSystemTemplate = ParticleSystemTemplate;
	Parms.ParticleSystemComponentReferenceVar = ParticleSystemComponentReferenceVar;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.InstanceParameters = InstanceParameters;
	Parms.AutoActivate = AutoActivate;
	Parms.AutoDestroy = AutoDestroy;
	Parms.AbsoluteLocation = AbsoluteLocation;
	Parms.AbsoluteRotation = AbsoluteRotation;
	Parms.AbsoluteScale = AbsoluteScale;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PSComponentReference != nullptr)
		*PSComponentReference = Parms.PSComponentReference;

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*           Physical_Material_Override                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OverridePhysicalMaterialOnCharacterMesh");

	Params::AEnemyPawn_Parent_C_OverridePhysicalMaterialOnCharacterMesh_Params Parms;
	Parms.Physical_Material_Override = Physical_Material_Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::DestroyAwokenSkeletalMesh(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "DestroyAwokenSkeletalMesh");

	Params::AEnemyPawn_Parent_C_DestroyAwokenSkeletalMesh_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          New_Material_To_Apply                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterialInterface* New_Material_To_Apply, bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OverrideMaterialAndCopyParametersOnCharacterMesh");

	Params::AEnemyPawn_Parent_C_OverrideMaterialAndCopyParametersOnCharacterMesh_Params Parms;
	Parms.New_Material_To_Apply = New_Material_To_Apply;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Hit_Direction                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Anim_Montage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayLocalAnimMontage_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult, float CallFunc_PlayLocalAnimMontage_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "PlayAdditiveHitReacts");

	Params::AEnemyPawn_Parent_C_PlayAdditiveHitReacts_Params Parms;
	Parms.Hit_Direction = Hit_Direction;
	Parms.Anim_Montage = Anim_Montage;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult = CallFunc_SetFNameBasedOnHitDirection_NameResult;
	Parms.CallFunc_PlayLocalAnimMontage_ReturnValue = CallFunc_PlayLocalAnimMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveParticlesOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Reset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SetActiveParticlesOnCharacterMesh(bool Active, bool Reset, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SetActiveParticlesOnCharacterMesh");

	Params::AEnemyPawn_Parent_C_SetActiveParticlesOnCharacterMesh_Params Parms;
	Parms.Active = Active;
	Parms.Reset = Reset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Parameter_Name                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scalar_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SetScalarParameterOnAllCharacterMIDs(class FName Parameter_Name, float Scalar_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SetScalarParameterOnAllCharacterMIDs");

	Params::AEnemyPawn_Parent_C_SetScalarParameterOnAllCharacterMIDs_Params Parms;
	Parms.Parameter_Name = Parameter_Name;
	Parms.Scalar_Value = Scalar_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Parameter_Name                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Linear_Color                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::SetVectorParameterOnAllCharacterMIDs(class FName Parameter_Name, const struct FLinearColor& Linear_Color, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "SetVectorParameterOnAllCharacterMIDs");

	Params::AEnemyPawn_Parent_C_SetVectorParameterOnAllCharacterMIDs_Params Parms;
	Parms.Parameter_Name = Parameter_Name;
	Parms.Linear_Color = Linear_Color;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>        ArrayOfColors                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor                Color                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::PickColorFromAnArrayOfColors(TArray<struct FLinearColor>& ArrayOfColors, struct FLinearColor* Color, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "PickColorFromAnArrayOfColors");

	Params::AEnemyPawn_Parent_C_PickColorFromAnArrayOfColors_Params Parms;
	Parms.ArrayOfColors = ArrayOfColors;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::StopDeathFX(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "StopDeathFX");

	Params::AEnemyPawn_Parent_C_StopDeathFX_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HQ                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TransformHitLocationWorldSpaceToPreskinnedLocalSpace_PreskinnedLS(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam2                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam3                              (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UParticleSystemComponent*    CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam4                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam5                              (IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::EnemyDeathVisuals(bool* HQ, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_TransformHitLocationWorldSpaceToPreskinnedLocalSpace_PreskinnedLS, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam3, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam4, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam5, float CallFunc_Lerp_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array2, float CallFunc_Multiply_FloatFloat_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference2)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "EnemyDeathVisuals");

	Params::AEnemyPawn_Parent_C_EnemyDeathVisuals_Params Parms;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_TransformHitLocationWorldSpaceToPreskinnedLocalSpace_PreskinnedLS = CallFunc_TransformHitLocationWorldSpaceToPreskinnedLocalSpace_PreskinnedLS;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.K2Node_MakeStruct_ParticleSysParam2 = K2Node_MakeStruct_ParticleSysParam2;
	Parms.K2Node_MakeStruct_ParticleSysParam3 = K2Node_MakeStruct_ParticleSysParam3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference = CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference;
	Parms.K2Node_MakeStruct_ParticleSysParam4 = K2Node_MakeStruct_ParticleSysParam4;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.K2Node_MakeStruct_ParticleSysParam5 = K2Node_MakeStruct_ParticleSysParam5;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference2 = CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference2;

	UObject::ProcessEvent(Func, &Parms);

	if (HQ != nullptr)
		*HQ = Parms.HQ;

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, float CallFunc_GetScalarParameterValue_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "UserConstructionScript");

	Params::AEnemyPawn_Parent_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference = CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__FinishedFunc()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "Enemy Spawn Out TL__FinishedFunc");

	Params::AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__UpdateFunc()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "Enemy Spawn Out TL__UpdateFunc");

	Params::AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::EnemySpawnInTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "EnemySpawnInTL__FinishedFunc");

	Params::AEnemyPawn_Parent_C_EnemySpawnInTL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::EnemySpawnInTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "EnemySpawnInTL__UpdateFunc");

	Params::AEnemyPawn_Parent_C_EnemySpawnInTL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc
// (BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::EnemySpawnInTL__Spawn__EventFunc()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "EnemySpawnInTL__Spawn__EventFunc");

	Params::AEnemyPawn_Parent_C_EnemySpawnInTL__Spawn__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "ReceiveBeginPlay");

	Params::AEnemyPawn_Parent_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void AEnemyPawn_Parent_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OnDeathPlayEffects");

	Params::AEnemyPawn_Parent_C_OnDeathPlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::BeginDeathFX()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "BeginDeathFX");

	Params::AEnemyPawn_Parent_C_BeginDeathFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PostSpawnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::PostSpawnIn()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "PostSpawnIn");

	Params::AEnemyPawn_Parent_C_PostSpawnIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     RiftLocationWS                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::DespawnEnemy(const struct FVector& RiftLocationWS)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "DespawnEnemy");

	Params::AEnemyPawn_Parent_C_DespawnEnemy_Params Parms;
	Parms.RiftLocationWS = RiftLocationWS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::DebugEnemySpawnIn()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "DebugEnemySpawnIn");

	Params::AEnemyPawn_Parent_C_DebugEnemySpawnIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::OnFinishedEncounterSpawn()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OnFinishedEncounterSpawn");

	Params::AEnemyPawn_Parent_C_OnFinishedEncounterSpawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::OnStartedEncounterSpawn()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OnStartedEncounterSpawn");

	Params::AEnemyPawn_Parent_C_OnStartedEncounterSpawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet
// (Event, Public, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::PawnUniqueIDSet()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "PawnUniqueIDSet");

	Params::AEnemyPawn_Parent_C_PawnUniqueIDSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void AEnemyPawn_Parent_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OnDamagePlayEffects");

	Params::AEnemyPawn_Parent_C_OnDamagePlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::AdditiveHitReactDelay()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "AdditiveHitReactDelay");

	Params::AEnemyPawn_Parent_C_AdditiveHitReactDelay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::OnBeginSleepEffects()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OnBeginSleepEffects");

	Params::AEnemyPawn_Parent_C_OnBeginSleepEffects_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::OnEndSleepEffects()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OnEndSleepEffects");

	Params::AEnemyPawn_Parent_C_OnEndSleepEffects_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelayCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelayCompleted()
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "RestorePreviousMaterialDelayCompleted");

	Params::AEnemyPawn_Parent_C_RestorePreviousMaterialDelayCompleted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay_Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelay(float Delay_Amount)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "RestorePreviousMaterialDelay");

	Params::AEnemyPawn_Parent_C_RestorePreviousMaterialDelay_Params Parms;
	Parms.Delay_Amount = Delay_Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnCheatUpdateSpecialEventGE
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShouldUseSpecialEventGE                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::OnCheatUpdateSpecialEventGE(bool bShouldUseSpecialEventGE)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "OnCheatUpdateSpecialEventGE");

	Params::AEnemyPawn_Parent_C_OnCheatUpdateSpecialEventGE_Params Parms;
	Parms.bShouldUseSpecialEventGE = bShouldUseSpecialEventGE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags2                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum2                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo2                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext2                                      ()
// enum class EFortDamageZone         CallFunc_GetDamageZone_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EnemyDeathVisuals_HQ                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_RiftLocationWS                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue3                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Rift_Portals_C*           K2Node_DynamicCast_AsB_Rift_Portals                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue4                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatFromStream_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_PickColorFromAnArrayOfColors_Color                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_PickColorFromAnArrayOfColors_Color2                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_PickColorFromAnArrayOfColors_Color3                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// class AFortProjectileBase*         K2Node_DynamicCast_AsFort_Projectile_Base                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 K2Node_DynamicCast_AsFort_Weapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDamageZone         CallFunc_GetDamageZone_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue2                                (NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetBoneIndex_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRefPosePosition_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue2                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue3                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue4                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Delay_Amount                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               K2Node_Event_bShouldUseSpecialEventGE                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyPawn_Parent_C::ExecuteUbergraph_EnemyPawn_Parent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FTransform& Temp_struct_Variable, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float K2Node_Event_Damage2, const struct FGameplayTagContainer& K2Node_Event_DamageTags2, const struct FVector& K2Node_Event_Momentum2, const struct FHitResult& K2Node_Event_HitInfo2, class AFortPawn* K2Node_Event_InstigatedBy2, class AActor* K2Node_Event_DamageCauser2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext2, enum class EFortDamageZone CallFunc_GetDamageZone_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EnemyDeathVisuals_HQ, const struct FTransform& Temp_struct_Variable2, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue2, const struct FVector& K2Node_CustomEvent_RiftLocationWS, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, int32 Temp_int_Variable, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue3, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AB_Rift_Portals_C* K2Node_DynamicCast_AsB_Rift_Portals, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, float Temp_float_Variable, float CallFunc_RandomFloatFromStream_ReturnValue, const struct FLinearColor& CallFunc_PickColorFromAnArrayOfColors_Color, const struct FLinearColor& CallFunc_PickColorFromAnArrayOfColors_Color2, const struct FLinearColor& CallFunc_PickColorFromAnArrayOfColors_Color3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue4, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsDedicatedServer_ReturnValue2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess2, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess3, enum class EFortDamageZone CallFunc_GetDamageZone_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue3, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_GetBoneIndex_ReturnValue, const struct FVector& CallFunc_GetRefPosePosition_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, bool Temp_bool_Variable2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue4, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue4, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& Temp_struct_Variable3, const struct FLinearColor& Temp_struct_Variable4, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue2, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue2, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue2, float K2Node_CustomEvent_Delay_Amount, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bShouldUseSpecialEventGE)
{
	static auto Func = Class->GetFunction("EnemyPawn_Parent_C", "ExecuteUbergraph_EnemyPawn_Parent");

	Params::AEnemyPawn_Parent_C_ExecuteUbergraph_EnemyPawn_Parent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.K2Node_Event_Damage2 = K2Node_Event_Damage2;
	Parms.K2Node_Event_DamageTags2 = K2Node_Event_DamageTags2;
	Parms.K2Node_Event_Momentum2 = K2Node_Event_Momentum2;
	Parms.K2Node_Event_HitInfo2 = K2Node_Event_HitInfo2;
	Parms.K2Node_Event_InstigatedBy2 = K2Node_Event_InstigatedBy2;
	Parms.K2Node_Event_DamageCauser2 = K2Node_Event_DamageCauser2;
	Parms.K2Node_Event_EffectContext2 = K2Node_Event_EffectContext2;
	Parms.CallFunc_GetDamageZone_ReturnValue = CallFunc_GetDamageZone_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EnemyDeathVisuals_HQ = CallFunc_EnemyDeathVisuals_HQ;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.K2Node_CustomEvent_RiftLocationWS = K2Node_CustomEvent_RiftLocationWS;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue3 = CallFunc_Conv_VectorToLinearColor_ReturnValue3;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Rift_Portals = K2Node_DynamicCast_AsB_Rift_Portals;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue4 = CallFunc_Conv_VectorToLinearColor_ReturnValue4;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_RandomFloatFromStream_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue;
	Parms.CallFunc_PickColorFromAnArrayOfColors_Color = CallFunc_PickColorFromAnArrayOfColors_Color;
	Parms.CallFunc_PickColorFromAnArrayOfColors_Color2 = CallFunc_PickColorFromAnArrayOfColors_Color2;
	Parms.CallFunc_PickColorFromAnArrayOfColors_Color3 = CallFunc_PickColorFromAnArrayOfColors_Color3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue4 = CallFunc_RandomFloatInRange_ReturnValue4;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue3 = CallFunc_K2_GetComponentLocation_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.K2Node_DynamicCast_AsFort_Projectile_Base = K2Node_DynamicCast_AsFort_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsFort_Weapon = K2Node_DynamicCast_AsFort_Weapon;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetDamageZone_ReturnValue2 = CallFunc_GetDamageZone_ReturnValue2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue2 = CallFunc_K2_SetTimer_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_GetBoneIndex_ReturnValue = CallFunc_GetBoneIndex_ReturnValue;
	Parms.CallFunc_GetRefPosePosition_ReturnValue = CallFunc_GetRefPosePosition_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue2 = CallFunc_GetSocketLocation_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue2 = CallFunc_SpawnEmitterAtLocation_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue5 = CallFunc_RandomFloatInRange_ReturnValue5;
	Parms.CallFunc_GetSocketLocation_ReturnValue3 = CallFunc_GetSocketLocation_ReturnValue3;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue3 = CallFunc_SpawnEmitterAtLocation_ReturnValue3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetSocketLocation_ReturnValue4 = CallFunc_GetSocketLocation_ReturnValue4;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue3 = CallFunc_SpawnSoundAttached_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue2 = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue2;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue2 = CallFunc_K2_GetTextureParameterValue_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue2 = CallFunc_K2_AttachToComponent_ReturnValue2;
	Parms.K2Node_CustomEvent_Delay_Amount = K2Node_CustomEvent_Delay_Amount;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_bShouldUseSpecialEventGE = K2Node_Event_bShouldUseSpecialEventGE;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

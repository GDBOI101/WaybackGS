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


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         CallFunc_GetItemDefinitionToShow_ItemDefinition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APartyDisplayManagerBP_C::SetupPrefabVisuals(class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "SetupPrefabVisuals");

	Params::APartyDisplayManagerBP_C_SetupPrefabVisuals_Params Parms;
	Parms.CallFunc_GetItemDefinitionToShow_ItemDefinition = CallFunc_GetItemDefinitionToShow_ItemDefinition;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*              OutDisplayedMesh                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyDisplayManagerBP_C::GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UInterfaceProperty_ CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput, class USkeletalMeshComponent* CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetMeshForCurrentDisplayedItem");

	Params::APartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem_Params Parms;
	Parms.CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue = CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput = CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput;
	Parms.CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue = CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDisplayedMesh != nullptr)
		*OutDisplayedMesh = Parms.OutDisplayedMesh;

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*         ItemDefinition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetSchematicCraftingResultBP_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyDisplayManagerBP_C::GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool Temp_bool_Variable, class UFortItemDefinition* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetItemDefinitionToShow");

	Params::APartyDisplayManagerBP_C_GetItemDefinitionToShow_Params Parms;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultBP_ReturnValue = CallFunc_GetSchematicCraftingResultBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemDefinition != nullptr)
		*ItemDefinition = Parms.ItemDefinition;

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Large_Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             Rarity                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSubstring_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindSubstring_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSubstring_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindSubstring_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyDisplayManagerBP_C::SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, enum class EFortRarity Rarity, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue2, int32 CallFunc_FindSubstring_ReturnValue3, bool CallFunc_Conv_IntToBool_ReturnValue2, bool CallFunc_Conv_IntToBool_ReturnValue3, int32 CallFunc_FindSubstring_ReturnValue4, bool CallFunc_Conv_IntToBool_ReturnValue4)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "SetUIOverrideVisuals");

	Params::APartyDisplayManagerBP_C_SetUIOverrideVisuals_Params Parms;
	Parms.Large_Texture = Large_Texture;
	Parms.Item = Item;
	Parms.Rarity = Rarity;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue2 = CallFunc_FindSubstring_ReturnValue2;
	Parms.CallFunc_FindSubstring_ReturnValue3 = CallFunc_FindSubstring_ReturnValue3;
	Parms.CallFunc_Conv_IntToBool_ReturnValue2 = CallFunc_Conv_IntToBool_ReturnValue2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue3 = CallFunc_Conv_IntToBool_ReturnValue3;
	Parms.CallFunc_FindSubstring_ReturnValue4 = CallFunc_FindSubstring_ReturnValue4;
	Parms.CallFunc_Conv_IntToBool_ReturnValue4 = CallFunc_Conv_IntToBool_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue2                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ComposeTransforms_ReturnValue                           (IsPlainOldData, NoDestructor)

struct FTransform APartyDisplayManagerBP_C::GetWeaponPlacementTransform(const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue2, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetWeaponPlacementTransform");

	Params::APartyDisplayManagerBP_C_GetWeaponPlacementTransform_Params Parms;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue2 = CallFunc_GetTransform_ReturnValue2;
	Parms.CallFunc_ComposeTransforms_ReturnValue = CallFunc_ComposeTransforms_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetPreviewMeshWorldTransform_ReturnValue                (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyDisplayManagerBP_C::UpdatePreviewMeshTransforms(const struct FTransform& CallFunc_GetPreviewMeshWorldTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "UpdatePreviewMeshTransforms");

	Params::APartyDisplayManagerBP_C_UpdatePreviewMeshTransforms_Params Parms;
	Parms.CallFunc_GetPreviewMeshWorldTransform_ReturnValue = CallFunc_GetPreviewMeshWorldTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*         ItemDefinition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetPreviewMeshOffset_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default                                            (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ComposeTransforms_ReturnValue                           (IsPlainOldData, NoDestructor)

struct FTransform APartyDisplayManagerBP_C::GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition, bool Temp_bool_Variable, const struct FTransform& CallFunc_GetPreviewMeshOffset_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue2, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FTransform& K2Node_Select_Default, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetItemPreviewOffset");

	Params::APartyDisplayManagerBP_C_GetItemPreviewOffset_Params Parms;
	Parms.ItemDefinition = ItemDefinition;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPreviewMeshOffset_ReturnValue = CallFunc_GetPreviewMeshOffset_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue2 = CallFunc_EqualEqual_VectorVector_ReturnValue2;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;
	Parms.CallFunc_ComposeTransforms_ReturnValue = CallFunc_ComposeTransforms_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionToShow_ItemDefinition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetItemPreviewOffset_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetWeaponPlacementTransform_ReturnValue                 (ConstParm, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ComposeTransforms_ReturnValue                           (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ComposeTransforms_ReturnValue2                          (IsPlainOldData, NoDestructor)

struct FTransform APartyDisplayManagerBP_C::GetPreviewMeshWorldTransform(float Temp_float_Variable, bool Temp_bool_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetItemPreviewOffset_ReturnValue, const struct FTransform& CallFunc_GetWeaponPlacementTransform_ReturnValue, float K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue2)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetPreviewMeshWorldTransform");

	Params::APartyDisplayManagerBP_C_GetPreviewMeshWorldTransform_Params Parms;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetItemDefinitionToShow_ItemDefinition = CallFunc_GetItemDefinitionToShow_ItemDefinition;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemPreviewOffset_ReturnValue = CallFunc_GetItemPreviewOffset_ReturnValue;
	Parms.CallFunc_GetWeaponPlacementTransform_ReturnValue = CallFunc_GetWeaponPlacementTransform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_ComposeTransforms_ReturnValue = CallFunc_ComposeTransforms_ReturnValue;
	Parms.CallFunc_ComposeTransforms_ReturnValue2 = CallFunc_ComposeTransforms_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 NewMesh                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionToShow_ItemDefinition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyDisplayManagerBP_C::SetupStaticMeshVisuals(class UStaticMesh* NewMesh, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "SetupStaticMeshVisuals");

	Params::APartyDisplayManagerBP_C_SetupStaticMeshVisuals_Params Parms;
	Parms.NewMesh = NewMesh;
	Parms.CallFunc_GetItemDefinitionToShow_ItemDefinition = CallFunc_GetItemDefinitionToShow_ItemDefinition;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               NewMesh                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionToShow_ItemDefinition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APartyDisplayManagerBP_C::SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "SetupSkeletalMeshVisuals");

	Params::APartyDisplayManagerBP_C_SetupSkeletalMeshVisuals_Params Parms;
	Parms.NewMesh = NewMesh;
	Parms.CallFunc_GetItemDefinitionToShow_ItemDefinition = CallFunc_GetItemDefinitionToShow_ItemDefinition;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyDisplayManagerBP_C::ResetVisuals(bool CallFunc_SetStaticMesh_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ResetVisuals");

	Params::APartyDisplayManagerBP_C_ResetVisuals_Params Parms;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "UserConstructionScript");

	Params::APartyDisplayManagerBP_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::ScaleAnimLevel__FinishedFunc()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ScaleAnimLevel__FinishedFunc");

	Params::APartyDisplayManagerBP_C_ScaleAnimLevel__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::ScaleAnimLevel__UpdateFunc()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ScaleAnimLevel__UpdateFunc");

	Params::APartyDisplayManagerBP_C_ScaleAnimLevel__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::ScaleAnimEvolve__FinishedFunc()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ScaleAnimEvolve__FinishedFunc");

	Params::APartyDisplayManagerBP_C_ScaleAnimEvolve__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::ScaleAnimEvolve__UpdateFunc()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ScaleAnimEvolve__UpdateFunc");

	Params::APartyDisplayManagerBP_C_ScaleAnimEvolve__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading
// (Event, Public, BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::ShowLoading()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ShowLoading");

	Params::APartyDisplayManagerBP_C_ShowLoading_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading
// (Event, Public, BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::HideLoading()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "HideLoading");

	Params::APartyDisplayManagerBP_C_HideLoading_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToView                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyDisplayManagerBP_C::ShowItem(class UFortItem* ItemToView)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ShowItem");

	Params::APartyDisplayManagerBP_C_ShowItem_Params Parms;
	Parms.ItemToView = ItemToView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::PlayLevelUpEffect()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "PlayLevelUpEffect");

	Params::APartyDisplayManagerBP_C_PlayLevelUpEffect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::PlayEvolutionEffect()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "PlayEvolutionEffect");

	Params::APartyDisplayManagerBP_C_PlayEvolutionEffect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::CelebrateWithFX()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "CelebrateWithFX");

	Params::APartyDisplayManagerBP_C_CelebrateWithFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APartyDisplayManagerBP_C::PerformScaleMeshFX()
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "PerformScaleMeshFX");

	Params::APartyDisplayManagerBP_C_PerformScaleMeshFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemWhoseAssetsWereLoaded                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             LoadedAssets                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APartyDisplayManagerBP_C::HandleLoadingAssetsForItemCompleted(class UFortItem* ItemWhoseAssetsWereLoaded, TArray<class UObject*>& LoadedAssets)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "HandleLoadingAssetsForItemCompleted");

	Params::APartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted_Params Parms;
	Parms.ItemWhoseAssetsWereLoaded = ItemWhoseAssetsWereLoaded;
	Parms.LoadedAssets = LoadedAssets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyDisplayManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ReceiveTick");

	Params::APartyDisplayManagerBP_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Event_ItemToView                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetWeaponPlacementTransform_ReturnValue                 (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Event_ItemWhoseAssetsWereLoaded                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_Event_LoadedAssets                                        (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionToShow_ItemDefinition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionToShow_ItemDefinition2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class AActor>        CallFunc_GetPreviewPrefabAsset_Asset                             (HasGetValueTypeHash)
// bool                               CallFunc_GetPreviewPrefabAsset_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Conv_AssetClassToClass_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStaticMesh>  CallFunc_GetPreviewStaticMeshAsset_Asset                         (HasGetValueTypeHash)
// bool                               CallFunc_GetPreviewStaticMeshAsset_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_GetPreviewSkeletalMeshAsset_Asset                       (HasGetValueTypeHash)
// bool                               CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetSchematicCraftingResultBP_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue2                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionToShow_ItemDefinition3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<TSoftObjectPtr<class UObject>>CallFunc_GetPreviewAssets_ReturnValue                            (ZeroConstructor, ReferenceParm)

void APartyDisplayManagerBP_C::ExecuteUbergraph_PartyDisplayManagerBP(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortItem* K2Node_Event_ItemToView, const struct FTransform& CallFunc_GetWeaponPlacementTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* K2Node_Event_ItemWhoseAssetsWereLoaded, TArray<class UObject*>& K2Node_Event_LoadedAssets, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, bool CallFunc_IsValid_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition2, bool CallFunc_Not_PreBool_ReturnValue, TSoftClassPtr<class AActor> CallFunc_GetPreviewPrefabAsset_Asset, bool CallFunc_GetPreviewPrefabAsset_ReturnValue, class UClass* CallFunc_Conv_AssetClassToClass_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_GetPreviewStaticMeshAsset_Asset, bool CallFunc_GetPreviewStaticMeshAsset_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetPreviewSkeletalMeshAsset_Asset, bool CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_AssetToObject_ReturnValue2, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess2, enum class EFortRarity CallFunc_GetRarity_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue3, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue2, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition3, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, TArray<TSoftObjectPtr<class UObject>>& CallFunc_GetPreviewAssets_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyDisplayManagerBP_C", "ExecuteUbergraph_PartyDisplayManagerBP");

	Params::APartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_ItemToView = K2Node_Event_ItemToView;
	Parms.CallFunc_GetWeaponPlacementTransform_ReturnValue = CallFunc_GetWeaponPlacementTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult2 = CallFunc_K2_SetWorldLocation_SweepHitResult2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_ItemWhoseAssetsWereLoaded = K2Node_Event_ItemWhoseAssetsWereLoaded;
	Parms.K2Node_Event_LoadedAssets = K2Node_Event_LoadedAssets;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetItemDefinitionToShow_ItemDefinition = CallFunc_GetItemDefinitionToShow_ItemDefinition;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetItemDefinitionToShow_ItemDefinition2 = CallFunc_GetItemDefinitionToShow_ItemDefinition2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPreviewPrefabAsset_Asset = CallFunc_GetPreviewPrefabAsset_Asset;
	Parms.CallFunc_GetPreviewPrefabAsset_ReturnValue = CallFunc_GetPreviewPrefabAsset_ReturnValue;
	Parms.CallFunc_Conv_AssetClassToClass_ReturnValue = CallFunc_Conv_AssetClassToClass_ReturnValue;
	Parms.CallFunc_GetPreviewStaticMeshAsset_Asset = CallFunc_GetPreviewStaticMeshAsset_Asset;
	Parms.CallFunc_GetPreviewStaticMeshAsset_ReturnValue = CallFunc_GetPreviewStaticMeshAsset_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.CallFunc_GetPreviewSkeletalMeshAsset_Asset = CallFunc_GetPreviewSkeletalMeshAsset_Asset;
	Parms.CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue = CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue2 = CallFunc_Conv_AssetToObject_ReturnValue2;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh = K2Node_DynamicCast_AsSkeletal_Mesh;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue3 = CallFunc_Conv_AssetToObject_ReturnValue3;
	Parms.CallFunc_GetSchematicCraftingResultBP_ReturnValue = CallFunc_GetSchematicCraftingResultBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue2 = CallFunc_Conv_FloatToVector_ReturnValue2;
	Parms.CallFunc_GetItemDefinitionToShow_ItemDefinition3 = CallFunc_GetItemDefinitionToShow_ItemDefinition3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetPreviewAssets_ReturnValue = CallFunc_GetPreviewAssets_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
